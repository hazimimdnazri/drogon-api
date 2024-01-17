#include <drogon/drogon.h>
using namespace drogon;
int main() {
    int port = 5555;
    
    // Custom error page.
    auto notfound = drogon::HttpResponse::newHttpViewResponse("error_404");
    notfound->setExpiredTime(0);
    drogon::app().setCustom404Page(notfound);
    
    LOG_DEBUG<<"The server is running on port "<<port;
    app().addListener("0.0.0.0", port).setThreadNum(16).run();
}
