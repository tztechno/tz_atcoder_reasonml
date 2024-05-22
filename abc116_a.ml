abc116_a.ml
###########################################
###########################################
###########################################
###########################################
###########################################
###########################################
###########################################
###########################################
let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> List.map(int_of_string);
let a = List.nth(numbers, 0);
let b = List.nth(numbers, 1);
let product = a*b/2
print_endline(string_of_int(product));
###########################################
[python]
a,b,c=map(int,input().split())
print(a*b//2)
###########################################
