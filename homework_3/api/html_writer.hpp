// @file      html_writer.h
// @author    Ignacio Vizzo     [ivizzo@uni-bonn.de]
//
// Copyright (c) 2020 Ignacio Vizzo, all rights reserved
#ifndef HTML_WRITER_H_
#define HTML_WRITER_H_

#include <string>
#include <fstream>
// using std::cout;
// using std::cerr;
using std::endl;
using std::string;
using std::fstream;
namespace html_writer {

/**
 * @brief OpenDocument() will print to the standard output the begining of a
 * HTML5 file. This function should be called only once at the begining of your
 * test program.
 */
void OpenDocument(fstream& file);

/**
 * @brief CloseDocument() will close the HTML5 file, this function should be
 * called only once at the end of your test program.
 */
void CloseDocument(fstream& file);

/**
 * @brief To make your application look nicer, you could opt for providing a
 * stylesheet using CSS for your web application.
 *
 * @param stylesheet The path where the CSS file is located, typically
 * "<path>/style.css"
 */
void AddCSSStyle(fstream& file, const std::string& stylesheet);

/**
 * @brief This function adds a Title to your web application
 *
 * @param title The string containing the title, could be as long as you wish.
 */
void AddTitle(fstream& file, const std::string& title);

/**
 * @brief This function adds a header to your web application
 *
 * @param header The string containing the header, could be as long as you wish.
 */
void AddHeader(fstream& file, const std::string& header);

/**
 * @brief This will open a <body> clause in your web application.
 */
void OpenBody(fstream& file);

/**
 * @brief This will close a </body> clause in your web application.
 */
void CloseBody(fstream& file);

/**
 * @brief This will open a new row division for your application, make sure the
 * class "row" is defined in the CSS file(if any).
 */
void OpenRow(fstream& file);

/**
 * @brief This will close a  row division for your application, make sure you
 * only call this function after a OpenRow() call
 */
void CloseRow(fstream& file);

// /**
//  * @brief This will open a new column division for your application, make sure the
//  * class "column" is defined in the CSS file(if any).
//  */
// void OpenColumn(fstream& file);

// /**
//  * @brief This will close a  column division for your application, make sure you
//  * only call this function after a Opencolumn() call
//  */
// void CloseColumn(fstream& file);

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
void AddImage(fstream& file, const std::string& img_path, float score, bool highlight = false);

}  // namespace html_writer

#endif  // HTML_WRITER_H_
