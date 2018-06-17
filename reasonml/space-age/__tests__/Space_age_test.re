open Jest;
open Expect;

describe("Space Age", () => {
  test("age on Earth", () =>
    expect(Space_age.age_on(Earth, 1000000000.0)) |> toBeSoCloseTo(31.69, ~digits=2)
  );
  test("age on Mercury", () =>
    expect(Space_age.age_on(Mercury, 2134835688.0)) |> toBeSoCloseTo(280.88, ~digits=2)
  );
  test("age on Venus", () =>
    expect(Space_age.age_on(Venus, 189839836.0)) |> toBeSoCloseTo(9.78, ~digits=2)
  );
  test("age on Mars", () =>
    expect(Space_age.age_on(Mars, 2329871239.0)) |> toBeSoCloseTo(39.25, ~digits=2)
  );
  test("age on Jupiter", () =>
    expect(Space_age.age_on(Jupiter, 901876382.0)) |> toBeSoCloseTo(2.41, ~digits=2)
  );
  test("age on Saturn", () =>
    expect(Space_age.age_on(Saturn, 3000000000.0)) |> toBeSoCloseTo(3.23, ~digits=2)
  );
  test("age on Uranus", () =>
    expect(Space_age.age_on(Uranus, 3210123456.0)) |> toBeSoCloseTo(1.21, ~digits=2)
  );
  test("age on Neptune", () =>
    expect(Space_age.age_on(Neptune, 8210123456.0)) |> toBeSoCloseTo(1.58, ~digits=2)
  );
})