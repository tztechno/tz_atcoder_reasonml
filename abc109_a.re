abc109_a.re
#############################################
#############################################
#############################################
#############################################
let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> List.map(int_of_string);
let a = List.nth(numbers, 0);
let b = List.nth(numbers, 1);
let c = (a*b) mod 2;
if (c==1) {
    print_endline("Yes");    
} else {
    print_endline("No");    
}
#############################################
[python]
a,b=map(int,input().split())
if (a*b)%2==1:
    print('Yes')
else:
    print('No')
#############################################
