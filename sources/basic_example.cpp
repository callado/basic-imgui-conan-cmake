#include <fmt/format.h>
#include <compare>
#include <random>

template <>
struct fmt::formatter<std::strong_ordering> : fmt::formatter<std::string> {
  template <typename FormatContext>
  auto format(const std::strong_ordering& so, FormatContext& ctx)
      -> decltype(ctx.out()) {
    std::string output{};
    if (so == std::strong_ordering::less) {
      output = "is less than";
    } else if (so == std::strong_ordering::equivalent) {
      output = "is equivalent to";
    } else if (so == std::strong_ordering::equal) {
      output = "is equal to";
    } else if (so == std::strong_ordering::greater) {
      output = "is greater than";
    }
    return format_to(ctx.out(), output);
  }
};

int main(int argc, char* argv[]) {
  std::uniform_int_distribution<> distr(1, 100);

  static std::random_device rng;

  for (int i = 0; i < 10; i++) {
    int a = distr(rng);
    int b = distr(rng);
    fmt::print("Lemme check... {} {} {}\n", a, a <=> b, b);
  }
  return 0;
}