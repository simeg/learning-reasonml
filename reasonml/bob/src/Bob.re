type response =
  | Whatever
  | Whoa
  | Sure
  | CalmDown
  | Fine;

let whoa: string = "Whoa, chill out!";
let sure: string = "Sure.";
let calm_down: string = "Calm down, I know what I'm doing!";
let fine: string = "Fine. Be that way!";
let whatever: string = "Whatever.";

let bobify = (input: string) : response => {
  let isEmpty: bool = String.trim(input) === "";

  if (! isEmpty) {
    let isShouting: bool = input === String.uppercase(input);
    let isQuestion: bool =
      String.contains_from(
        String.trim(input),
        String.length(String.trim(input)) - 1,
        '?',
      );
    let isOnlyNumbers: bool =
      String.lowercase(input) === String.uppercase(input);

    if (isOnlyNumbers && isQuestion) {
      Sure;
    } else if (isOnlyNumbers) {
      Whatever;
    } else if (isShouting && isQuestion) {
      CalmDown;
    } else if (isShouting) {
      Whoa;
    } else if (isQuestion) {
      Sure;
    } else {
      Whatever;
    };
  } else {
    Fine;
  };
};

let hey = (input: string) : string =>
  switch (bobify(input)) {
  | Whatever => whatever
  | Whoa => whoa
  | CalmDown => calm_down
  | Sure => sure
  | Fine => fine
  };
