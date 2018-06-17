type planet =
  | Earth
  | Mercury
  | Venus
  | Mars
  | Jupiter
  | Saturn
  | Uranus
  | Neptune;

let age_on_planet = (planet: planet) : float => {
  let earth_value = 86400. *. 365.25;
  switch (planet) {
  | Earth => earth_value
  | Mercury => earth_value *. 0.2408467
  | Venus => earth_value *. 0.61519726
  | Mars => earth_value *. 1.8808158
  | Jupiter => earth_value *. 11.862615
  | Saturn => earth_value *. 29.447498
  | Uranus => earth_value *. 84.016846
  | Neptune => earth_value *. 164.79132
  };
};

let age_on = (planet: planet, seconds: float) : float =>
  seconds /. age_on_planet(planet);
