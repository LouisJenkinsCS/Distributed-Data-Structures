use Spawn;
use Time;

proc main() {
  var arr : [1..10] (int, int);
  for i in 1..10 {
    arr[i] = (i, i**2);
  }
  plot("Test", arr);
}

inline proc stringify(data : [?dataDom] ?tupleType) {
  var str : string;
  for tpl in data {
    for param i in 1..tpl.size {
      if i != 1 then str = str + ",";
      str = str + tpl[i];
    }
    str = str + "\n";
  }
  return str;
}

proc plot(name, data) {
  var tmpFile = open("gnuplot_data.dat", iomode.cw);
  var writer = tmpFile.writer();

  writer.write(stringify(data));
  writer.close();
  var cmd : string = "gnuplot -e \"set terminal pngcairo size 1920,1080 enhanced font 'Verdana,10';\n";
  cmd = cmd + "set output 'out.png';\n";
  cmd = cmd + "set datafile separator ',';\n";
  cmd = cmd + "plot 'gnuplot_data.dat' using 1:2:xtic(1) with lines title '" + name + "'\n";
  cmd = cmd + "\"";

  writeln("Executing: ", cmd, " with data: ", stringify(data));
  var sub = spawnshell([cmd]);
  sub.communicate();
  writeln("Done");
}
