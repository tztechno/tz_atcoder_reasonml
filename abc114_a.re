abc114_a.re
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
let x = int_of_string(read_line());
let t = (x-7)*(x-5)*(x-3);
if (t==0) {
    print_endline("YES");    
} else {
    print_endline("NO");    
}
##########################################
let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let x = numbers[0];
let t = (x-7)*(x-5)*(x-3);
if (t==0) {
    print_endline("YES");    
} else {
    print_endline("NO");    
}
##########################################
[python]
X=int(input())
if (X-7)*(X-5)*(X-3)==0:
  print('YES')
else:
  print('NO')
##########################################
