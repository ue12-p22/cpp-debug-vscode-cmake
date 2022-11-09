#include <vector>
#include <string_view>
#include <algorithm>
#include <ranges>

auto oldToNew(int argc, char** argv){
    std::vector<std::string_view> args(argc-1);
    std::size_t i {1};
    std::ranges::transform( args.begin(), args.end(), args.begin(), [&i, &argv]( std::string_view ){
        return std::string_view{argv[i++]};
    });
    return args;
}

int main(int argc, char** argv){

    std::vector<std::string_view> args = oldToNew( argc, argv );

    return EXIT_SUCCESS;
}