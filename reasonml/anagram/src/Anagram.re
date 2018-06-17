let strToSortedArray = (s: string) : array(string) =>
  Js.Array.sortInPlace(Js.String.split("", String.lowercase(s)));

let anagrams = (word: string, possibleAnagrams: list(string)) : list(string) =>
  if (word === String.uppercase(word)) {
    [];
  } else {
    let wordArr: array(string) = strToSortedArray(word);

    List.filter(
      (w: string) => strToSortedArray(w) == wordArr,
      possibleAnagrams,
    );
  };
