abc186_a.re
############################################
############################################
############################################
############################################
############################################
############################################
############################################
############################################
############################################
let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let n = numbers[0];
let w = numbers[1];
let t = n/w; 
print_endline(string_of_int(t));
############################################
[python]
n,w=map(int,input().split())
print(n//w)
############################################
