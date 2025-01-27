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


#include "SWGSpectrumAnnotationMarker.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSpectrumAnnotationMarker::SWGSpectrumAnnotationMarker(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSpectrumAnnotationMarker::SWGSpectrumAnnotationMarker() {
    start_frequency = 0L;
    m_start_frequency_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    marker_color = 0;
    m_marker_color_isSet = false;
    show = 0;
    m_show_isSet = false;
}

SWGSpectrumAnnotationMarker::~SWGSpectrumAnnotationMarker() {
    this->cleanup();
}

void
SWGSpectrumAnnotationMarker::init() {
    start_frequency = 0L;
    m_start_frequency_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    marker_color = 0;
    m_marker_color_isSet = false;
    show = 0;
    m_show_isSet = false;
}

void
SWGSpectrumAnnotationMarker::cleanup() {




}

SWGSpectrumAnnotationMarker*
SWGSpectrumAnnotationMarker::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSpectrumAnnotationMarker::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&start_frequency, pJson["startFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&bandwidth, pJson["bandwidth"], "qint32", "");
    
    ::SWGSDRangel::setValue(&marker_color, pJson["markerColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&show, pJson["show"], "qint32", "");
    
}

QString
SWGSpectrumAnnotationMarker::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSpectrumAnnotationMarker::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_start_frequency_isSet){
        obj->insert("startFrequency", QJsonValue(start_frequency));
    }
    if(m_bandwidth_isSet){
        obj->insert("bandwidth", QJsonValue(bandwidth));
    }
    if(m_marker_color_isSet){
        obj->insert("markerColor", QJsonValue(marker_color));
    }
    if(m_show_isSet){
        obj->insert("show", QJsonValue(show));
    }

    return obj;
}

qint64
SWGSpectrumAnnotationMarker::getStartFrequency() {
    return start_frequency;
}
void
SWGSpectrumAnnotationMarker::setStartFrequency(qint64 start_frequency) {
    this->start_frequency = start_frequency;
    this->m_start_frequency_isSet = true;
}

qint32
SWGSpectrumAnnotationMarker::getBandwidth() {
    return bandwidth;
}
void
SWGSpectrumAnnotationMarker::setBandwidth(qint32 bandwidth) {
    this->bandwidth = bandwidth;
    this->m_bandwidth_isSet = true;
}

qint32
SWGSpectrumAnnotationMarker::getMarkerColor() {
    return marker_color;
}
void
SWGSpectrumAnnotationMarker::setMarkerColor(qint32 marker_color) {
    this->marker_color = marker_color;
    this->m_marker_color_isSet = true;
}

qint32
SWGSpectrumAnnotationMarker::getShow() {
    return show;
}
void
SWGSpectrumAnnotationMarker::setShow(qint32 show) {
    this->show = show;
    this->m_show_isSet = true;
}


bool
SWGSpectrumAnnotationMarker::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_start_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_marker_color_isSet){
            isObjectUpdated = true; break;
        }
        if(m_show_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

