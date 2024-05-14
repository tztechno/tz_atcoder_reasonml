abc110_a.re
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
let c = List.nth(numbers, 2);

let max3 = (a: int, b: int, c: int) => {
  let m1 = a > b ? a : b;
  m1 > c ? m1 : c;
};

let ans = (a+b+c)+max3(a,b,c)*9;

print_endline(string_of_int(ans));
###########################################
[python]
a,b,c=map(int,input().split())
ans=(a+b+c)+max(a,b,c)*9
print(ans)
###########################################
