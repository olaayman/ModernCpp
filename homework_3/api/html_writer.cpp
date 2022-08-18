#include "html_writer.hpp"
#include <iostream>
#include <fstream>

using std::endl;
using std::string;
using std::fstream;

namespace html_writer {
/**
 * @brief OpenDocument() will print to the standard output the begining of a
 * HTML5 file. This function should be called only once at the begining of your
 * test program.
 */
void OpenDocument(fstream& file){
   std::cout << "hellooo";
   file << "<!DOCTYPE html>" <<endl << "<html>"<< endl;
}

/**
 * @brief CloseDocument() will close the HTML5 file, this function should be
 * called only once at the end of your test program.
 */
void CloseDocument(fstream& file){
   file << "</html>"<< endl;
}

/**
 * @brief To make your application look nicer, you could opt for providing a
 * stylesheet using CSS for your web application.
 *
 * @param stylesheet The path where the CSS file is located, typically
 * "<path>/style.css"
 */
void AddCSSStyle(fstream& file, const std::string& stylesheet){
   file << "<head>" << endl << "<link rel=\"stylesheet\" type=\"text/css\" href=\"" << stylesheet << "\" />" << endl <<
  "</head>"<< endl;
}

/**
 * @brief This function adds a Title to your web application
 *
 * @param title The string containing the title, could be as long as you wish.
 */
void AddTitle(fstream& file, const std::string& title){

   file << "<title>"<< title << "</title>"<< endl;
}

/**
 * @brief This function adds a header to your web application
 *
 * @param header The string containing the header, could be as long as you wish.
 */
void AddHeader(fstream& file, const std::string& header){

   file << "<h1>"<< header << "</h1>"<< endl;
}

/**
 * @brief This will open a <body> clause in your web application.
 */
void OpenBody(fstream& file){
   file << "<body>"<< endl;
}

/**
 * @brief This will close a </body> clause in your web application.
 */
void CloseBody(fstream& file){
   file << "</body>"<< endl;
}

/**
 * @brief This will open a new row division for your application, make sure the
 * class "row" is defined in the CSS file(if any).
 */
void OpenRow(fstream& file){
   file << "<div class=\"row\">" << endl;
}

/**
 * @brief This will close a  row division for your application, make sure you
 * only call this function after a OpenRow() call
 */
void CloseRow(fstream& file){
   file << "</div>" << endl ;
}
// /**
//  * @brief This will open a new column division for your application, make sure the
//  * class "column" is defined in the CSS file(if any).
//  */
// void OpenColumn(fstream& file){
//    file << "<div class=\"column\">" << endl;
// }

// /**
//  * @brief This will close a  column division for your application, make sure you
//  * only call this function after a Opencolumn() call
//  */
// void CloseColumn(fstream& file){
//    file << "</div>" << endl ;
// }

/**
 * @brief This function will add a new image to your web application using the
 * <img src=""> clause. It also prints the score of the image and the name of
 * the image. If it happens to be the very first image you add to your web
 * application, then,  it should be highlighted.
 *
 * @param img_path  The path to the image [png, jpg]
 * @param score     The score of the given image
 * @param highlight In case to be the very first image, this must be true.
 */
void AddImage(fstream& file, const std::string& img_path, float score, bool highlight){
   if (highlight){
      file << "<div class=\"column\" style=\"border: 5px solid green;\">" << endl;
   }else {
      file << "<div class=\"column\">" << endl;
   }
   file << "<img src=\"" << img_path << "\" />" << endl
        << "<p>score = "<< score << "</p>" << endl 
        << "</div>" << endl ;
}

}