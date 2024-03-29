###################################################
https://atcoder.jp/contests/APG4b
###################################################
###################################################
###################################################
###################################################
###################################################
###################################################
###################################################
###################################################
###################################################
###################################################
[playgroundでは正しく表示される]

let s1 = "Hello, ";
let s2 = "World!";
let s3 = s1 ++ s2;
Js.log(s3); /* "Hello, World!" と出力される */
###################################################
[playgroundでは動かない]
[atcoder guiで動かない]

let s1 = "Hello, "
let s2 = "World!"
let s3 = s1 ^ s2
print_endline s3
###################################################
type state = {
  movies: list(string)
};

type action =
  | AddMovie(string)
  | RemoveMovie(string)
  | Reset

let defaultState = { movies: [] }

let reducer = (state) => fun
  | AddMovie(movie) => { movies: [movie, ...state.movies] }
  | RemoveMovie(movie) => { movies: state.movies |> List.filter(m => m !== movie) }
  | Reset => defaultState;

/* No need for additional functions! */
let someAction = AddMovie("The End of Evangelion")
###################################################
let sum = (a,b) => a + b;
let sum = (a: int, b: int) => a + b;
type product = {
  name: string,
  id: int,
};
let formatName = product => "Name: "++product.name;
let updateName = (product, name) => { ...product, name };
###################################################
let author = Some("Brandon");
switch (author) {
| Some("Brandon") => Js.log("Hello there, Brandon.")
| Some(string) => Js.log("Welcome, " ++ string ++ "!")
| None => Js.log({j|We have no author. 😞|j})
};
###################################################
let number = 1;

/* Unicodeを使うなら、下記の{j|...|j}を使わないといけない */
let result =
  if (number > 0) {
    {j|ゼロより大きい|j};
  } else {
    {j|１より少ない|j};
  };
/* resultは「ゼロより大きい」になる */
###################################################
let numbers = [1,2,3] //これは配列ではなく、	連結リストです
// 配列にするなら…
let numbersArray = [|1,2,3|]
// タプルもある
type myName = { name: string }
let otherStuff = ("Brandon", 36, { name: "Brandon" })
###################################################
let code = {js|いつも2525|js};
let aaa = {js|AtCoderくん|js};
print_endline(code);
print_endline(aaa);
###################################################
let code = {js|こんにちは|js};
let aaa = {|AtCoder|};
print_endline(code);
print_endline(aaa);
###################################################
let code = {js|Hello, world!|js};
print_endline(code);
###################################################
let greetingAndOneSlash = {|176160768\|};
print_endline(greetingAndOneSlash);
###################################################
#### same as test ans 3 1 2 2 
let greetingAndOneSlash = {|3
1
2
2|};
print_endline(greetingAndOneSlash);
###################################################
