//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "TestView.h"
#include <drogon/utils/OStringStream.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <list>
#include <deque>
#include <queue>
using namespace drogon;
std::string TestView::genText(const DrTemplateData& TestView_view_data)
{
	drogon::OStringStream TestView_tmp_stream;
	std::string layoutName{"Layout"};
TestView_tmp_stream<<"\n";
	TestView_tmp_stream << "<!DOCTYPE html>\n";
	TestView_tmp_stream << "<html lang=\"en\">\n";
	TestView_tmp_stream << "<head>\n";
	TestView_tmp_stream << "    <meta charset=\"UTF-8\">\n";
	TestView_tmp_stream << "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
	TestView_tmp_stream << "    <title>Test View</title>\n";
	TestView_tmp_stream << "</head>\n";
	TestView_tmp_stream << "<body>\n";
	TestView_tmp_stream << "    <h1>Hello From View!</h1>\n";
	TestView_tmp_stream << "</body>\n";
	TestView_tmp_stream << "</html>\n";
if(layoutName.empty())
{
std::string ret{std::move(TestView_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = TestView_view_data;
auto str = std::move(TestView_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
