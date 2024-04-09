abc009_a.re

let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let a = numbers[0];
let t = (a+1)/2;
print_endline(string_of_int(t));
