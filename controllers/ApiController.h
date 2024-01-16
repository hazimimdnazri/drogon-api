#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class ApiController : public drogon::HttpController<ApiController>
{
	public:
		METHOD_LIST_BEGIN
		ADD_METHOD_TO(ApiController::getIndex, "/", Get);
		METHOD_LIST_END

		void getIndex(const HttpRequestPtr &req, std::function<void (const HttpResponsePtr &)> &&callback);
};
