abc102_a.re
######################################
######################################
######################################
######################################
######################################
######################################
######################################
######################################
######################################
######################################

[error]

let input = read_line();
let numbers = input
  |> String.trim
  |> String.split_on_char(' ')
  |> Array.of_list
  |> Array.map(int_of_string);
let n = Array.fold_left((+), 0, numbers);
if (n%2==0) {
    print_endline(string_of_int(n));    
}
else {
    print_endline(string_of_int(n*2));    
}
------------------

[if文に問題あり]

(cd _build/default && /home/runner/.opam/5.0.0/bin/ocamlopt.opt -w -40 -g -O2 -I bin/.main.eobjs/byte -I bin/.main.eobjs/native -I lib/.main.objs/byte -I lib/.main.objs/native -intf-suffix .ml -no-alias-deps -o bin/.main.eobjs/native/dune__exe__Main.cmx -c -impl bin/main.re.ml)
File "bin/main.re", line 9, characters 5-6:
9 | if (n%2==0) {
         ^
Error: Unbound value %

######################################
