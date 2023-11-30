template <unsigned n, unsigned i>
struct check_division {
   enum { value = (n%i != 0) && check_division<n, i - 1>::value };
};

template <unsigned n>
struct check_division<n, 1> {
   enum { value = 1 };
};

template <unsigned n>
struct is_prime {
   enum { value = check_division<n, n-1>::value };
};

template <>
struct is_prime<0> {
   enum { value = 0 };
};

template <>
struct is_prime<1> {
   enum { value = 0 };
};     