#####################################
# read_line as string
let ans = read_line();
print_endline(ans);
#####################################
let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);

let sum = Array.fold_left((+), 0, numbers);
print_endline(string_of_int(sum+1));
入力１の数字に対して
######################################
