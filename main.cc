#include <drogon/drogon.h>
using namespace drogon;
int main() {
    app().addListener("0.0.0.0", 5555)
        .setThreadNum(16)
        .run();
}
