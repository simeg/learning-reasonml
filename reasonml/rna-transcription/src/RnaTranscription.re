type rnaType =
  | G
  | C
  | T
  | U
  | A;

let lookup = (input: rnaType) : rnaType =>
  switch (input) {
  | G => C
  | C => G
  | T => A
  | A => U
  };

let toRna = (input: list(rnaType)) : list(rnaType) =>
  List.map(rna => lookup(rna), input);
