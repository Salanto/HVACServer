#ifndef PACKET_H
#define PACKET_H

#include <QJsonValue>
#include <QString>

class Packet
{
public:
    virtual ~Packet() = default;
    virtual QString header() const = 0;
};

#endif // PACKET_H
