#####################################
let input = read_line();

let numbers = input
|> String.trim
|> String.split_on_char(' ')
|> Array.of_list
|> Array.map(int_of_string);

let a = numbers[0];
let b = numbers[1];
let ans = b - a + 1;

print_endline(string_of_int(ans));
#####################################
