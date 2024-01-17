#include "ApiController.h"

void ApiController::getIndex(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback){
    auto resp = HttpResponse::newHttpResponse();
    resp->setStatusCode(k200OK);
    resp->setBody("The server is up and running!");
    resp->setExpiredTime(0);
    callback(resp);
};

void ApiController::getInfo(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback){
    auto resp = HttpResponse::newHttpResponse();
    resp->setStatusCode(k200OK);
    resp->setBody("This is the info page");
    resp->setExpiredTime(0);
    callback(resp);
};

void ApiController::getView(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback){
    auto resp = HttpResponse::newHttpViewResponse("TestView.csp");
    resp->setStatusCode(k200OK);
    resp->setExpiredTime(0);
    callback(resp);
};
