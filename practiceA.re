//practiceA.re
##################################
1
2 3
test
##################################
##################################
##################################
##################################
##################################
##################################
##################################
##################################
[error]
open Node.Fs;

let main = () => {
  createReadStream(~fd=stdIn, ())
  |> Readable.readAllAsync
  |> Js.Promise.then_(data => {
    let str = Belt.Buffer.toString(data);
    let input = str |> Js.String.trim |> Js.String.split("\\n");

    let a = Js.Float.fromString(input[0]) |> Belt.Option.getExn |> Js.Math.floor_int;

    let nums = input[1] |> Js.String.split(" ") |> Array.map(Js.Float.fromString) |> Array.keepMap(Belt.Option.getExn);
    let b = nums[0] |> Js.Math.floor_int;
    let c = nums[1] |> Js.Math.floor_int;

    let s = input[2];

    print_string("%d %s", a + b + c, s);

    Js.Promise.resolve();
  });
};

main();
##################################
