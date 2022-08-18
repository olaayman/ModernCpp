#include <fstream>
#include <iostream>
#include "api/html_writer.hpp"
//using namespace std;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::fstream;

int main() {

    string filename("webPage.html");
    fstream webPage;

    webPage.open(filename, std::ios_base::out);
    html_writer::OpenDocument(webPage);
    html_writer::AddTitle(webPage, "Your Special Image Browser");
    html_writer::AddCSSStyle(webPage, "web_app/style.css");
    html_writer::OpenBody(webPage);
    html_writer::AddHeader(webPage, "amazing photos!");
    html_writer::OpenRow(webPage);
    html_writer::AddImage(webPage, "web_app/data/000000.png", 0.55, true);
    html_writer::AddImage(webPage, "web_app/data/000100.png", 0.53);
    html_writer::CloseRow(webPage);
    html_writer::OpenRow(webPage);
    html_writer::AddImage(webPage, "web_app/data/000300.png", 0.86);
    html_writer::AddImage(webPage, "web_app/data/000500.png", 0.12 , true);
    html_writer::CloseRow(webPage);
    html_writer::CloseBody(webPage);
    html_writer::CloseDocument(webPage);
  
    return 0;
}