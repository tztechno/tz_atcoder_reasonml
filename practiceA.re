//practiceA.re
##################################
1
2 3
##################################
let input1 = read_line();
let input2 = read_line();
let numbers1 = input1
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let sum1 = Array.fold_left((+), 0, numbers1);
let numbers2 = input2
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let sum2 = Array.fold_left((+), 0, numbers2);
print_endline(string_of_int(sum1+sum2));
出力
6
##################################
1
2 3
test
##################################
let input1 = read_line();
let input2 = read_line();
let s = read_line();
let numbers1 = input1
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let sum1 = Array.fold_left((+), 0, numbers1);
let numbers2 = input2
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let sum2 = Array.fold_left((+), 0, numbers2);

print_endline (string_of_int (sum1 + sum2))
print_endline (s)
出力
6
test
##################################
##################################
##################################
##################################
##################################
##################################
##################################
