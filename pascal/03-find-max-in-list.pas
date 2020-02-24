{ Пример программы нахождения максимального элемента в массиве из 20 чисел.  }
uses sysutils;
const
    N = 20;
var 
    i   : Integer;
    m   : array[1..N] of Integer;
    max : Integer;
begin
    { Заполняем массив m из параметров запуска }
    { Нумерация входных параметров начинается с 1 индекса }
    for i := 1 to N do
    begin
        m[i] := StrToInt(ParamStr(i));
    end;
    
    { Находим максимальный элемент }
    max := m[1];
    for i := 2 to N do
    begin
        if (m[i] > max) then
            max := m[i];
    end;
    
    { Вывод результата }
    Writeln(max);
end.