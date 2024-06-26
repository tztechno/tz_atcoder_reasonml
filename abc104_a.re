abc104_a.re
#######################################
#######################################
#######################################
#######################################
#######################################
#######################################
#######################################
let input = read_line();

let numbers = input
|> String.trim
|> String.split_on_char(' ')
|> Array.of_list
|> Array.map(int_of_string);

let r = numbers[0];
if (r<1200) {
    print_endline("ABC");   
} else if (r<2800) {
    print_endline("ARC");       
} else {
    print_endline("AGC");    
}
#######################################
