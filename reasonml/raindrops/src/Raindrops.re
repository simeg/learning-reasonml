let mod3 = (n: int) : string => n mod 3 === 0 ? "Pling" : "";
let mod5 = (n: int) : string => n mod 5 === 0 ? "Plang" : "";
let mod7 = (n: int) : string => n mod 7 === 0 ? "Plong" : "";

let numToSound = (n: int) : string =>
  if (n mod 3 === 0 || n mod 5 === 0 || n mod 7 === 0) {
    String.concat("", [mod3(n), mod5(n), mod7(n)]);
  } else {
    string_of_int(n);
  };

let raindrops = (number: int) : string => numToSound(number);
