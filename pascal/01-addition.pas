// Пример программы, получающей два аргумента и выводящей их сумму
uses sysutils;
var
  a : LongInt;
  b : LongInt;
begin
  // Получаем первые два аргумента
  // Нумерация входных параметров начинается с 1 индекса
  a := StrToInt(ParamStr(1));
  b := StrToInt(ParamStr(2));
  //Вывод результата
  Writeln(a+b);
end.
