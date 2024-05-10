abc082_a.ml
##########################################
##########################################
##########################################
##########################################
##########################################
let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> List.map(int_of_string);
let a = List.nth(numbers, 0);
let b = List.nth(numbers, 1);
let ans = (a+b+1)/2;
print_endline(string_of_int(ans));
##########################################
[python]
import math
a,b=map(int,input().split())
print((a+b+1)//2)
##########################################
