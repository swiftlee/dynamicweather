//
// Created by Jon on 2/7/2018.
//
#include <string>

/**************************
* API-KEY AND LANG FORMAT *
**************************/
static const std::string apiKey = "0202eede3ce9293069ce0346a9778cd3";
static const std::string appid = "&APPID=";
static const std::string langId = "&lang={lang}";

/*******************************
* LOCATION FORMATS: CHOOSE ONE *
********************************/

static const std::string name = "q={city}";
static const std::string id = "id={id}";
static const std::string geoCoords = "lat={lat}&lon={lon}";
static const std::string zip = "zip={zip},{country code}";

/***********
* BASE URL *
***********/

static const std::string url = "http://api.openweathermap.org/data/2.5/forecast?";
static const std::string host = "api.openweathermap.org";

/******************************
 * Supported languages:       *
 * Arabic - ar,               *
 * Bulgarian - bg,            *
 * Catalan - ca,              *
 * Czech - cz,                *
 * German - de,               *
 * Greek - el,                *
 * English - en,              *
 * Persian (Farsi) - fa,      *
 * Finnish - fi,              *
 * French - fr,               *
 * Galician - gl,             *
 * Croatian - hr,             *
 * Hungarian - hu,            *
 * Italian - it,              *
 * Japanese - ja,             *
 * Korean - kr,               *
 * Latvian - la,              *
 * Lithuanian - lt,           *
 * Macedonian - mk,           *
 * Dutch - nl,                *
 * Polish - pl,               *
 * Portuguese - pt,           *
 * Romanian - ro,             *
 * Russian - ru,              *
 * Swedish - se,              *
 * Slovak - sk,               *
 * Slovenian - sl,            *
 * Spanish - es,              *
 * Turkish - tr,              *
 * Ukrainian - ua,            *
 * Vietnamese - vi,           *
 * Chinese Simplified - zh_cn,*
 * Chinese Traditional - zh_tw*
 * ****************************
 */

static const std::string lang =
    "ar,bg,ca,cz,de,el,en,fa,fi,fr,gl,hr,hu,it,ja,kr,la,lt,mk,nl,pl,pt,ro,ru,se,sk,sl,es,tr,ua,vi,zh_cn,zh_tw";

/*
 * JSON DOCUMENTATION:
 * -------------------
 * coord:
 *    coord.lon City geo location, longitude
 *    coord.lat City geo location, latitude
 *
 * weather - (more info Weather condition codes):
 *    weather.id - Weather condition id
 *    weather.main - Group of weather parameters (Rain, Snow, Extreme etc.)
 *    weather.description - Weather condition within the group
 *    weather.icon - Weather icon id
 *
 * base - Internal parameter
 *
 * main:
 *    main.temp - Temperature. Unit Default: Kelvin, Metric: Celsius, Imperial: Fahrenheit.
 *    main.pressure - Atmospheric pressure (on the sea level, if there is no sea_level or grnd_level data), hPa
 *    main.humidity - Humidity, %
 *    main.temp_min - Minimum temperature at the moment. This is deviation from current temp that is possible for large cities and megalopolises geographically expanded (use these parameter optionally). Unit Default: Kelvin, Metric: Celsius, Imperial: Fahrenheit.
 *    main.temp_max - Maximum temperature at the moment. This is deviation from current temp that is possible for large cities and megalopolises geographically expanded (use these parameter optionally). Unit Default: Kelvin, Metric: Celsius, Imperial: Fahrenheit.
 *    main.sea_level - Atmospheric pressure on the sea level, hPa
 *    main.grnd_level - Atmospheric pressure on the ground level, hPa
 *
 * wind:
 *    wind.speed - Wind speed. Unit Default: meter/sec, Metric: meter/sec, Imperial: miles/hour.
 *    wind.deg - Wind direction, degrees (meteorological)
 *
 * clouds:
 *    clouds.all - Cloudiness, %
 *
 * rain:
 *    rain.3h - Rain volume for the last 3 hours
 *
 * snow:
 *    snow.3h - Snow volume for the last 3 hours
 *
 * dt - Time of data calculation, unix, UTC
 *
 * sys:
 *    sys.type - Internal parameter
 *    sys.id - Internal parameter
 *    sys.message - Internal parameter
 *    sys.country - Country code (GB, JP etc.)
 *    sys.sunrise - Sunrise time, unix, UTC
 *    sys.sunset - Sunset time, unix, UTC
 *
 * id - City ID
 * name - City name
 * cod - Internal parameter
 */