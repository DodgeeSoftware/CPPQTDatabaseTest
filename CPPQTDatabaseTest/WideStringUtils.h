/* SimpleDatabase Application Using Qt, MySQL and C++ 
 (c) Dodgee Software 2018
	Youtube: https://youtube.com/dodgeesoftware */

#ifndef WIDESTRINGUTILS_H
#define WIDESTRINGUTILS_H

// C/C++ Includes
#include <algorithm>
#ifndef _MSC_VER
	#include <cwchar>
	#include <wctype.h>
#else
	#include <wchar.h>
	#include <ctype.h>
#endif
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>

// QT Includes
// TODO: We need to track down where the QString class is and only include that header
#include <QtCore/QDebug.h>
#include <QtWidgets/QApplication.h>
#include <QtWidgets/QPushbutton.h>
#include <QtWidgets/QMessageBox>

namespace Utils
{
    //! Split strings according to a delimiter
    inline std::vector<std::wstring> &split(const std::wstring &s, wchar_t delim, std::vector<std::wstring> &elems)
    {
        std::wstringstream ss(s);
        std::wstring item;
        while (std::getline(ss, item, delim)) {
            elems.push_back(item);
        }
        return elems;
    }
    //! Split strings according to a delimiter
    inline std::vector<std::wstring> split(const std::wstring &s, wchar_t delim)
    {
        std::vector<std::wstring> elems;
        split(s, delim, elems);
        return elems;
    }
    //! Remove whitespace
    inline std::wstring removeWhiteSpace(std::wstring text)
    {
        text.erase(std::remove_if(text.begin(), text.end(), isspace), text.end());
        return text;
    }
	//! Convert a string to upper case
    inline std::wstring toUpper(std::wstring text)
    {
        std::wstring uppercase(text);
        for (std::wstring::iterator p = uppercase.begin(); p != uppercase.end(); p++)
			#ifndef _MSC_VER
				*p = std::towupper(*p);
			#else
				*p = towupper(*p);
			#endif
        return uppercase;
    }
    //! Convert a string to lower case
    inline std::wstring toLower(std::wstring text)
    {
        std::wstring lowercase(text);
        for (std::wstring::iterator p = lowercase.begin(); p != lowercase.end(); p++)
			#ifndef _MSC_VER
				*p = std::towlower(*p);
			#else
				*p = towlower(*p);
			#endif
        return lowercase;
    }
    //! Convert a CStyle WideString to a Float
    inline float toFloat(wchar_t* text)
    {
        return wcstof(text, 0);
    }
    //! Convert a C++ Style WideString To Float
    inline float toFloat(std::wstring text)
    {
        return wcstof(text.c_str(), 0);
    }
    //! Convert a CStyle WideString to a Double
    inline float toDouble(wchar_t* text)
    {
        return wcstod(text, 0);
    }
    //! Convert a C++ Style WideString To Double
    inline float toDouble(std::wstring text)
    {
        return wcstod(text.c_str(), 0);
    }
    //! Convert a CStyle String(base 10) to a UnsignedShortInt
    inline long toUnsignedShortInt(wchar_t* text)
    {
        return wcstol(text, 0, 10);
    }
    //! Convert a C++ Style String(base 10) to a ShortInt
    inline unsigned int toUnsignedShortInt(std::wstring text)
    {
        return wcstol(text.c_str(), 0, 10);
    }

    //! Convert a CStyle String(base 10) to a ShortInt
    inline long toShortInt(wchar_t* text)
    {
        return wcstol(text, 0, 10);
    }
    //! Convert a C++ Style String(base 10) to a ShortInt
    inline unsigned int toShortInt(std::wstring text)
    {
        return wcstol(text.c_str(), 0, 10);
    }
    //! Convert a CStyle String(base 10) to a Int
    inline long toInt(wchar_t* text)
    {
        return wcstol(text, 0, 10);
    }
    //! Convert a C++ Style String(base 10) to a Int
    inline unsigned int toInt(std::wstring text)
    {
        return wcstol(text.c_str(), 0, 10);
    }

    //! Convert a CStyle String(base 10) to a Unsigned Int
    inline long toUnsignedInt(wchar_t* text)
    {
        return wcstol(text, 0, 10);
    }
    //! Convert a C++ Style String(base 10) to a Unsigned Int
    inline unsigned int toUnsignedInt(std::wstring text)
    {
        return wcstol(text.c_str(), 0, 10);
    }
    //! Convert a CStyle String(base 10) to a Long
    inline long toLong(wchar_t* text)
    {
        return wcstol(text, 0, 10);
    }
    //! Convert a C++ Style String(base 10) to a Long
    inline long toLong(std::wstring text)
    {
        return wcstol(text.c_str(), 0, 10);
    }

    //! Convert a CStyle String (base10) to an unsigned long
    inline unsigned long toUnsignedLong(wchar_t* text)
    {
        return wcstoul(text, 0, 10);
    }
    //! Convert a C++ Style String (base10) to an unsigned long
    inline unsigned long toUnsignedLong(std::wstring text)
    {
        return wcstoul(text.c_str(), 0, 10);
    }

    //! Convert a C++ WideString to a MultibyteString
    inline std::string toString(std::wstring text)
    {
        //return result;
		return std::string(text.begin(), text.end());
    }
    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(std::string text)
    {
        //return result;
		return std::wstring(text.begin(), text.end());
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(float value)
    {
        wchar_t text[128];
        swprintf(text, L"%f", value); // NOTE: a float format string here is used because swprintf uses doubles in place of floats
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(double value)
    {
        wchar_t text[128];
        swprintf(text, L"%f", value); // NOTE: a float format string here is used because swprintf uses doubles in place of floats
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(int value)
    {
        wchar_t text[128];
        _itow(value, text, 10);
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(unsigned int value)
    {
        wchar_t text[128];
        _ui64tow(value, text, 10);
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(long value)
    {
        wchar_t text[128];
        _ltow(value, text, 10);
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(unsigned long value)
    {
        wchar_t text[128];
        _ultow(value, text, 10);
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(bool value)
    {
        if (value == true)
            return L"TRUE";
        return L"FALSE";
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(char value)
    {
        wchar_t text[128];
        swprintf(text, L"%c", value);
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(unsigned char value)
    {
        wchar_t text[128];
        swprintf(text, L"%uc", value);
        return std::wstring(text);
    }

    //! Convert a C++ MultibyteString to a C++ WideString
    inline std::wstring toWideString(wchar_t* value)
    {
        return std::wstring(value);
    }

	// ****************
	// * QT FUNCTIONS *
	// ****************
	
	// Convert a QString into a std::wstring
	inline std::wstring toWideString(QString qString)
	{
		// Validate String
		if (qString.length() == 0)
			return std::wstring();
		wchar_t* wideTitle = new wchar_t[qString.length() + 1];
		qString.toWCharArray(wideTitle);
		/* NOTE: In Wide Strings the string terminator is a 00 00 I force a terminator here because 
			it seems to QString to toWCharArray doesn't give me a string terminator */
		wideTitle[qString.length()] = L'\x00'; 			
		std::wstring muhString = Utils::toWideString(wideTitle);
		//std::wcout << muhString << std::endl;
		delete wideTitle;
		return muhString;
	}

	// Convert a QString into a std::string
	inline std::string toString(QString qString)
	{
		// Validate String
		if (qString.length() == 0)
			return std::string();
		// Convert the QString to a std::wstring
		std::wstring wideString = toWideString(qString);
		return toString(wideString);
	}

	// Convert a std::string to a QString
	inline QString toQString(std::string text)
	{
		return QString(text.c_str());
	}

	// Convert a long to a QString
	inline QString toQString(long value)
	{
		std::ostringstream oss;
		oss << value;
		return QString(oss.str().c_str());
	}
	// TODO: Consider other datatypes to convert to QString, such as floats

	/* TODO: I think we needs some methods that do the following
		- convert std::string to QString  
		- convert char* to QString
		- convert std::wstring to QString 
		- convert wchar_t* to QString
		- convet QString to wchar_t*
		- convert QString to char* 
		*/
}

#endif // WIDESTRINGUTILS_H







