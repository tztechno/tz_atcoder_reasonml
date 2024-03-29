########################################
########################################
[+]

let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);

let sum = Array.fold_left((+), 0, numbers);

print_endline(string_of_int(sum));
########################################
########################################
[*]

let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);

let product = Array.fold_left( ( * ), 1, numbers);
print_endline(string_of_int(product));
########################################
########################################


