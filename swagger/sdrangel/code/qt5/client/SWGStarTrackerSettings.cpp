/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGStarTrackerSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGStarTrackerSettings::SWGStarTrackerSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGStarTrackerSettings::SWGStarTrackerSettings() {
    target = nullptr;
    m_target_isSet = false;
    ra = nullptr;
    m_ra_isSet = false;
    dec = nullptr;
    m_dec_isSet = false;
    azimuth = 0.0f;
    m_azimuth_isSet = false;
    elevation = 0.0f;
    m_elevation_isSet = false;
    l = 0.0f;
    m_l_isSet = false;
    b = 0.0f;
    m_b_isSet = false;
    azimuth_offset = 0.0f;
    m_azimuth_offset_isSet = false;
    elevation_offset = 0.0f;
    m_elevation_offset_isSet = false;
    latitude = 0.0f;
    m_latitude_isSet = false;
    longitude = 0.0f;
    m_longitude_isSet = false;
    date_time = nullptr;
    m_date_time_isSet = false;
    refraction = nullptr;
    m_refraction_isSet = false;
    pressure = 0.0f;
    m_pressure_isSet = false;
    temperature = 0.0f;
    m_temperature_isSet = false;
    humidity = 0.0f;
    m_humidity_isSet = false;
    height_above_sea_level = 0.0f;
    m_height_above_sea_level_isSet = false;
    temperature_lapse_rate = 0.0f;
    m_temperature_lapse_rate_isSet = false;
    frequency = 0.0f;
    m_frequency_isSet = false;
    stellarium_server_enabled = 0;
    m_stellarium_server_enabled_isSet = false;
    stellarium_port = 0;
    m_stellarium_port_isSet = false;
    update_period = 0.0f;
    m_update_period_isSet = false;
    epoch = nullptr;
    m_epoch_isSet = false;
    draw_sun_on_map = 0;
    m_draw_sun_on_map_isSet = false;
    draw_moon_on_map = 0;
    m_draw_moon_on_map_isSet = false;
    draw_star_on_map = 0;
    m_draw_star_on_map_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_feature_set_index = 0;
    m_reverse_api_feature_set_index_isSet = false;
    reverse_api_feature_index = 0;
    m_reverse_api_feature_index_isSet = false;
    rollup_state = nullptr;
    m_rollup_state_isSet = false;
}

SWGStarTrackerSettings::~SWGStarTrackerSettings() {
    this->cleanup();
}

void
SWGStarTrackerSettings::init() {
    target = new QString("");
    m_target_isSet = false;
    ra = new QString("");
    m_ra_isSet = false;
    dec = new QString("");
    m_dec_isSet = false;
    azimuth = 0.0f;
    m_azimuth_isSet = false;
    elevation = 0.0f;
    m_elevation_isSet = false;
    l = 0.0f;
    m_l_isSet = false;
    b = 0.0f;
    m_b_isSet = false;
    azimuth_offset = 0.0f;
    m_azimuth_offset_isSet = false;
    elevation_offset = 0.0f;
    m_elevation_offset_isSet = false;
    latitude = 0.0f;
    m_latitude_isSet = false;
    longitude = 0.0f;
    m_longitude_isSet = false;
    date_time = new QString("");
    m_date_time_isSet = false;
    refraction = new QString("");
    m_refraction_isSet = false;
    pressure = 0.0f;
    m_pressure_isSet = false;
    temperature = 0.0f;
    m_temperature_isSet = false;
    humidity = 0.0f;
    m_humidity_isSet = false;
    height_above_sea_level = 0.0f;
    m_height_above_sea_level_isSet = false;
    temperature_lapse_rate = 0.0f;
    m_temperature_lapse_rate_isSet = false;
    frequency = 0.0f;
    m_frequency_isSet = false;
    stellarium_server_enabled = 0;
    m_stellarium_server_enabled_isSet = false;
    stellarium_port = 0;
    m_stellarium_port_isSet = false;
    update_period = 0.0f;
    m_update_period_isSet = false;
    epoch = new QString("");
    m_epoch_isSet = false;
    draw_sun_on_map = 0;
    m_draw_sun_on_map_isSet = false;
    draw_moon_on_map = 0;
    m_draw_moon_on_map_isSet = false;
    draw_star_on_map = 0;
    m_draw_star_on_map_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_feature_set_index = 0;
    m_reverse_api_feature_set_index_isSet = false;
    reverse_api_feature_index = 0;
    m_reverse_api_feature_index_isSet = false;
    rollup_state = new SWGRollupState();
    m_rollup_state_isSet = false;
}

void
SWGStarTrackerSettings::cleanup() {
    if(target != nullptr) { 
        delete target;
    }
    if(ra != nullptr) { 
        delete ra;
    }
    if(dec != nullptr) { 
        delete dec;
    }








    if(date_time != nullptr) { 
        delete date_time;
    }
    if(refraction != nullptr) { 
        delete refraction;
    }









    if(epoch != nullptr) { 
        delete epoch;
    }



    if(title != nullptr) { 
        delete title;
    }


    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(rollup_state != nullptr) { 
        delete rollup_state;
    }
}

SWGStarTrackerSettings*
SWGStarTrackerSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGStarTrackerSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&target, pJson["target"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&ra, pJson["ra"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&dec, pJson["dec"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&azimuth, pJson["azimuth"], "float", "");
    
    ::SWGSDRangel::setValue(&elevation, pJson["elevation"], "float", "");
    
    ::SWGSDRangel::setValue(&l, pJson["l"], "float", "");
    
    ::SWGSDRangel::setValue(&b, pJson["b"], "float", "");
    
    ::SWGSDRangel::setValue(&azimuth_offset, pJson["azimuthOffset"], "float", "");
    
    ::SWGSDRangel::setValue(&elevation_offset, pJson["elevationOffset"], "float", "");
    
    ::SWGSDRangel::setValue(&latitude, pJson["latitude"], "float", "");
    
    ::SWGSDRangel::setValue(&longitude, pJson["longitude"], "float", "");
    
    ::SWGSDRangel::setValue(&date_time, pJson["dateTime"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&refraction, pJson["refraction"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&pressure, pJson["pressure"], "float", "");
    
    ::SWGSDRangel::setValue(&temperature, pJson["temperature"], "float", "");
    
    ::SWGSDRangel::setValue(&humidity, pJson["humidity"], "float", "");
    
    ::SWGSDRangel::setValue(&height_above_sea_level, pJson["heightAboveSeaLevel"], "float", "");
    
    ::SWGSDRangel::setValue(&temperature_lapse_rate, pJson["temperatureLapseRate"], "float", "");
    
    ::SWGSDRangel::setValue(&frequency, pJson["frequency"], "float", "");
    
    ::SWGSDRangel::setValue(&stellarium_server_enabled, pJson["stellariumServerEnabled"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stellarium_port, pJson["stellariumPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&update_period, pJson["updatePeriod"], "float", "");
    
    ::SWGSDRangel::setValue(&epoch, pJson["epoch"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&draw_sun_on_map, pJson["drawSunOnMap"], "qint32", "");
    
    ::SWGSDRangel::setValue(&draw_moon_on_map, pJson["drawMoonOnMap"], "qint32", "");
    
    ::SWGSDRangel::setValue(&draw_star_on_map, pJson["drawStarOnMap"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_feature_set_index, pJson["reverseAPIFeatureSetIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_feature_index, pJson["reverseAPIFeatureIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rollup_state, pJson["rollupState"], "SWGRollupState", "SWGRollupState");
    
}

QString
SWGStarTrackerSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGStarTrackerSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(target != nullptr && *target != QString("")){
        toJsonValue(QString("target"), target, obj, QString("QString"));
    }
    if(ra != nullptr && *ra != QString("")){
        toJsonValue(QString("ra"), ra, obj, QString("QString"));
    }
    if(dec != nullptr && *dec != QString("")){
        toJsonValue(QString("dec"), dec, obj, QString("QString"));
    }
    if(m_azimuth_isSet){
        obj->insert("azimuth", QJsonValue(azimuth));
    }
    if(m_elevation_isSet){
        obj->insert("elevation", QJsonValue(elevation));
    }
    if(m_l_isSet){
        obj->insert("l", QJsonValue(l));
    }
    if(m_b_isSet){
        obj->insert("b", QJsonValue(b));
    }
    if(m_azimuth_offset_isSet){
        obj->insert("azimuthOffset", QJsonValue(azimuth_offset));
    }
    if(m_elevation_offset_isSet){
        obj->insert("elevationOffset", QJsonValue(elevation_offset));
    }
    if(m_latitude_isSet){
        obj->insert("latitude", QJsonValue(latitude));
    }
    if(m_longitude_isSet){
        obj->insert("longitude", QJsonValue(longitude));
    }
    if(date_time != nullptr && *date_time != QString("")){
        toJsonValue(QString("dateTime"), date_time, obj, QString("QString"));
    }
    if(refraction != nullptr && *refraction != QString("")){
        toJsonValue(QString("refraction"), refraction, obj, QString("QString"));
    }
    if(m_pressure_isSet){
        obj->insert("pressure", QJsonValue(pressure));
    }
    if(m_temperature_isSet){
        obj->insert("temperature", QJsonValue(temperature));
    }
    if(m_humidity_isSet){
        obj->insert("humidity", QJsonValue(humidity));
    }
    if(m_height_above_sea_level_isSet){
        obj->insert("heightAboveSeaLevel", QJsonValue(height_above_sea_level));
    }
    if(m_temperature_lapse_rate_isSet){
        obj->insert("temperatureLapseRate", QJsonValue(temperature_lapse_rate));
    }
    if(m_frequency_isSet){
        obj->insert("frequency", QJsonValue(frequency));
    }
    if(m_stellarium_server_enabled_isSet){
        obj->insert("stellariumServerEnabled", QJsonValue(stellarium_server_enabled));
    }
    if(m_stellarium_port_isSet){
        obj->insert("stellariumPort", QJsonValue(stellarium_port));
    }
    if(m_update_period_isSet){
        obj->insert("updatePeriod", QJsonValue(update_period));
    }
    if(epoch != nullptr && *epoch != QString("")){
        toJsonValue(QString("epoch"), epoch, obj, QString("QString"));
    }
    if(m_draw_sun_on_map_isSet){
        obj->insert("drawSunOnMap", QJsonValue(draw_sun_on_map));
    }
    if(m_draw_moon_on_map_isSet){
        obj->insert("drawMoonOnMap", QJsonValue(draw_moon_on_map));
    }
    if(m_draw_star_on_map_isSet){
        obj->insert("drawStarOnMap", QJsonValue(draw_star_on_map));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_feature_set_index_isSet){
        obj->insert("reverseAPIFeatureSetIndex", QJsonValue(reverse_api_feature_set_index));
    }
    if(m_reverse_api_feature_index_isSet){
        obj->insert("reverseAPIFeatureIndex", QJsonValue(reverse_api_feature_index));
    }
    if((rollup_state != nullptr) && (rollup_state->isSet())){
        toJsonValue(QString("rollupState"), rollup_state, obj, QString("SWGRollupState"));
    }

    return obj;
}

QString*
SWGStarTrackerSettings::getTarget() {
    return target;
}
void
SWGStarTrackerSettings::setTarget(QString* target) {
    this->target = target;
    this->m_target_isSet = true;
}

QString*
SWGStarTrackerSettings::getRa() {
    return ra;
}
void
SWGStarTrackerSettings::setRa(QString* ra) {
    this->ra = ra;
    this->m_ra_isSet = true;
}

QString*
SWGStarTrackerSettings::getDec() {
    return dec;
}
void
SWGStarTrackerSettings::setDec(QString* dec) {
    this->dec = dec;
    this->m_dec_isSet = true;
}

float
SWGStarTrackerSettings::getAzimuth() {
    return azimuth;
}
void
SWGStarTrackerSettings::setAzimuth(float azimuth) {
    this->azimuth = azimuth;
    this->m_azimuth_isSet = true;
}

float
SWGStarTrackerSettings::getElevation() {
    return elevation;
}
void
SWGStarTrackerSettings::setElevation(float elevation) {
    this->elevation = elevation;
    this->m_elevation_isSet = true;
}

float
SWGStarTrackerSettings::getL() {
    return l;
}
void
SWGStarTrackerSettings::setL(float l) {
    this->l = l;
    this->m_l_isSet = true;
}

float
SWGStarTrackerSettings::getB() {
    return b;
}
void
SWGStarTrackerSettings::setB(float b) {
    this->b = b;
    this->m_b_isSet = true;
}

float
SWGStarTrackerSettings::getAzimuthOffset() {
    return azimuth_offset;
}
void
SWGStarTrackerSettings::setAzimuthOffset(float azimuth_offset) {
    this->azimuth_offset = azimuth_offset;
    this->m_azimuth_offset_isSet = true;
}

float
SWGStarTrackerSettings::getElevationOffset() {
    return elevation_offset;
}
void
SWGStarTrackerSettings::setElevationOffset(float elevation_offset) {
    this->elevation_offset = elevation_offset;
    this->m_elevation_offset_isSet = true;
}

float
SWGStarTrackerSettings::getLatitude() {
    return latitude;
}
void
SWGStarTrackerSettings::setLatitude(float latitude) {
    this->latitude = latitude;
    this->m_latitude_isSet = true;
}

float
SWGStarTrackerSettings::getLongitude() {
    return longitude;
}
void
SWGStarTrackerSettings::setLongitude(float longitude) {
    this->longitude = longitude;
    this->m_longitude_isSet = true;
}

QString*
SWGStarTrackerSettings::getDateTime() {
    return date_time;
}
void
SWGStarTrackerSettings::setDateTime(QString* date_time) {
    this->date_time = date_time;
    this->m_date_time_isSet = true;
}

QString*
SWGStarTrackerSettings::getRefraction() {
    return refraction;
}
void
SWGStarTrackerSettings::setRefraction(QString* refraction) {
    this->refraction = refraction;
    this->m_refraction_isSet = true;
}

float
SWGStarTrackerSettings::getPressure() {
    return pressure;
}
void
SWGStarTrackerSettings::setPressure(float pressure) {
    this->pressure = pressure;
    this->m_pressure_isSet = true;
}

float
SWGStarTrackerSettings::getTemperature() {
    return temperature;
}
void
SWGStarTrackerSettings::setTemperature(float temperature) {
    this->temperature = temperature;
    this->m_temperature_isSet = true;
}

float
SWGStarTrackerSettings::getHumidity() {
    return humidity;
}
void
SWGStarTrackerSettings::setHumidity(float humidity) {
    this->humidity = humidity;
    this->m_humidity_isSet = true;
}

float
SWGStarTrackerSettings::getHeightAboveSeaLevel() {
    return height_above_sea_level;
}
void
SWGStarTrackerSettings::setHeightAboveSeaLevel(float height_above_sea_level) {
    this->height_above_sea_level = height_above_sea_level;
    this->m_height_above_sea_level_isSet = true;
}

float
SWGStarTrackerSettings::getTemperatureLapseRate() {
    return temperature_lapse_rate;
}
void
SWGStarTrackerSettings::setTemperatureLapseRate(float temperature_lapse_rate) {
    this->temperature_lapse_rate = temperature_lapse_rate;
    this->m_temperature_lapse_rate_isSet = true;
}

float
SWGStarTrackerSettings::getFrequency() {
    return frequency;
}
void
SWGStarTrackerSettings::setFrequency(float frequency) {
    this->frequency = frequency;
    this->m_frequency_isSet = true;
}

qint32
SWGStarTrackerSettings::getStellariumServerEnabled() {
    return stellarium_server_enabled;
}
void
SWGStarTrackerSettings::setStellariumServerEnabled(qint32 stellarium_server_enabled) {
    this->stellarium_server_enabled = stellarium_server_enabled;
    this->m_stellarium_server_enabled_isSet = true;
}

qint32
SWGStarTrackerSettings::getStellariumPort() {
    return stellarium_port;
}
void
SWGStarTrackerSettings::setStellariumPort(qint32 stellarium_port) {
    this->stellarium_port = stellarium_port;
    this->m_stellarium_port_isSet = true;
}

float
SWGStarTrackerSettings::getUpdatePeriod() {
    return update_period;
}
void
SWGStarTrackerSettings::setUpdatePeriod(float update_period) {
    this->update_period = update_period;
    this->m_update_period_isSet = true;
}

QString*
SWGStarTrackerSettings::getEpoch() {
    return epoch;
}
void
SWGStarTrackerSettings::setEpoch(QString* epoch) {
    this->epoch = epoch;
    this->m_epoch_isSet = true;
}

qint32
SWGStarTrackerSettings::getDrawSunOnMap() {
    return draw_sun_on_map;
}
void
SWGStarTrackerSettings::setDrawSunOnMap(qint32 draw_sun_on_map) {
    this->draw_sun_on_map = draw_sun_on_map;
    this->m_draw_sun_on_map_isSet = true;
}

qint32
SWGStarTrackerSettings::getDrawMoonOnMap() {
    return draw_moon_on_map;
}
void
SWGStarTrackerSettings::setDrawMoonOnMap(qint32 draw_moon_on_map) {
    this->draw_moon_on_map = draw_moon_on_map;
    this->m_draw_moon_on_map_isSet = true;
}

qint32
SWGStarTrackerSettings::getDrawStarOnMap() {
    return draw_star_on_map;
}
void
SWGStarTrackerSettings::setDrawStarOnMap(qint32 draw_star_on_map) {
    this->draw_star_on_map = draw_star_on_map;
    this->m_draw_star_on_map_isSet = true;
}

QString*
SWGStarTrackerSettings::getTitle() {
    return title;
}
void
SWGStarTrackerSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGStarTrackerSettings::getRgbColor() {
    return rgb_color;
}
void
SWGStarTrackerSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

qint32
SWGStarTrackerSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGStarTrackerSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGStarTrackerSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGStarTrackerSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGStarTrackerSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGStarTrackerSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGStarTrackerSettings::getReverseApiFeatureSetIndex() {
    return reverse_api_feature_set_index;
}
void
SWGStarTrackerSettings::setReverseApiFeatureSetIndex(qint32 reverse_api_feature_set_index) {
    this->reverse_api_feature_set_index = reverse_api_feature_set_index;
    this->m_reverse_api_feature_set_index_isSet = true;
}

qint32
SWGStarTrackerSettings::getReverseApiFeatureIndex() {
    return reverse_api_feature_index;
}
void
SWGStarTrackerSettings::setReverseApiFeatureIndex(qint32 reverse_api_feature_index) {
    this->reverse_api_feature_index = reverse_api_feature_index;
    this->m_reverse_api_feature_index_isSet = true;
}

SWGRollupState*
SWGStarTrackerSettings::getRollupState() {
    return rollup_state;
}
void
SWGStarTrackerSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGStarTrackerSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(target && *target != QString("")){
            isObjectUpdated = true; break;
        }
        if(ra && *ra != QString("")){
            isObjectUpdated = true; break;
        }
        if(dec && *dec != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_azimuth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_elevation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_l_isSet){
            isObjectUpdated = true; break;
        }
        if(m_b_isSet){
            isObjectUpdated = true; break;
        }
        if(m_azimuth_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_elevation_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_latitude_isSet){
            isObjectUpdated = true; break;
        }
        if(m_longitude_isSet){
            isObjectUpdated = true; break;
        }
        if(date_time && *date_time != QString("")){
            isObjectUpdated = true; break;
        }
        if(refraction && *refraction != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_pressure_isSet){
            isObjectUpdated = true; break;
        }
        if(m_temperature_isSet){
            isObjectUpdated = true; break;
        }
        if(m_humidity_isSet){
            isObjectUpdated = true; break;
        }
        if(m_height_above_sea_level_isSet){
            isObjectUpdated = true; break;
        }
        if(m_temperature_lapse_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stellarium_server_enabled_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stellarium_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_update_period_isSet){
            isObjectUpdated = true; break;
        }
        if(epoch && *epoch != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_draw_sun_on_map_isSet){
            isObjectUpdated = true; break;
        }
        if(m_draw_moon_on_map_isSet){
            isObjectUpdated = true; break;
        }
        if(m_draw_star_on_map_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_feature_set_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_feature_index_isSet){
            isObjectUpdated = true; break;
        }
        if(rollup_state && rollup_state->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

