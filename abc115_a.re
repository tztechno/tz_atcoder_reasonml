abc115_a.re
##########################################
let ans = ref("Christmas");
for (_ in 1 to 25 - d) {
  ans := ans^ ++ " Eve";
};
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
let input = read_line();
let d = input |> String.trim |> int_of_string;
let ans = ref("Christmas");
for (_ in 1 to 25 - d) {
  ans := ans^ ++ " Eve";
};
print_endline(ans^);
##########################################
let input = read_line();
let numbers =
  input
  |> String.trim
  |> String.split_on_char(' ')
  |> List.map(int_of_string);
let d = List.nth(numbers, 0);
let rec appendEve = (ans, count) =>
  switch (count) {
  | 0 => ans
  | _ => appendEve(ans ++ " Eve", count - 1)
  };
let ans = appendEve("Christmas", 25 - d);
print_endline(ans);
##########################################
[python]
D=int(input())
print("Christmas"+" Eve"*(25-D))
##########################################
