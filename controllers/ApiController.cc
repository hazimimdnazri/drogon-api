#include "ApiController.h"

void ApiController::getIndex(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback){
    LOG_DEBUG << "A user arrived!";
    auto resp = HttpResponse::newHttpResponse();
    resp->setStatusCode(k200OK);
    resp->setBody("The server is up and running!");
    resp->setExpiredTime(0);
    callback(resp);
};
