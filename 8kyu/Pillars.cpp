long pillars(int num_of_pillars, int distance, int width) {
  return num_of_pillars == 1 ? 0 : (num_of_pillars - 1) * distance * 100 + (num_of_pillars - 2) * width;
}