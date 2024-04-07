abc070_b.re
##############################
##############################
##############################
##############################
##############################
##############################
##############################
##############################
let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let a = numbers[0];
let b = numbers[1];
let c = numbers[2];
let d = numbers[3];
let t=max(min(b,d)-max(a,c),0);
print_endline(string_of_int(t));
##############################
