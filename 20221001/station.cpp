#include <iostream>
using namespace std;

enum Stations {
    DONG_JIAO_NORTH_STATION,      // 东郊北站
    XIANG_YANG_ROAD_STATION,      // 巷阳路站
    XIANG_YANG_EAST_ROAD_STATION, // 巷阳东路站
    FLOWER_MARKET_STATION,        // 花卉市场站
    DONG_JIAO_SPACE_STATION,      // 东郊广场站
    CITIZEN_CENTRAL_STATION,      // 市民中心站
    TEENAGER_PALACE_STATION,      // 少年宫站
    SEAFOOD_MARKET_STATION,       // 海鲜市场站
    TELECOM_BUILDING_STATION,     // 电信大厦站
    HOPEFUL_SCHOOL_STATION        // 希望小学站
} station;

const char *stationsName[10] = {
    "东郊北站",
    "巷阳路站",
    "巷阳东路站",
    "花卉市场站",
    "东郊广场站",
    "市民中心站",
    "少年宫站",
    "海鲜市场站",
    "电信大厦站",
    "希望小学站"
};

const char borderline[65] = "----------------------------------------------------------------";
const char prefix[22] = "[智能报站系统] ";

int main()
{
    Stations startStation = DONG_JIAO_NORTH_STATION;
    Stations endStation   = HOPEFUL_SCHOOL_STATION;
    int nextStation;
    int passengersCount = 4;

    for(station = startStation; station <= endStation; station = (Stations) (station + 1))
    {
        if((station >= XIANG_YANG_ROAD_STATION) && (station <= CITIZEN_CENTRAL_STATION))
        {
            passengersCount += 2;
        }
        else if(station == TEENAGER_PALACE_STATION)
        {
            passengersCount -= 3;
        }
        else
        {
            if(station != DONG_JIAO_NORTH_STATION)
            {
                passengersCount++;
            }
        }

        cout << borderline << endl;
        nextStation = station + 1;
        if(nextStation <= endStation)
        {
            cout << prefix << ">> 车辆起步, 请坐稳扶好. 下一站是: " << stationsName[nextStation] << endl;
            cout << prefix << ">> 请提前做好下车的准备." << endl;
            cout << prefix << ">> 列车已离开: " << stationsName[station] << "." << endl;
        }
        else
        {
            cout << prefix << ">> 列车已抵达终点站: " << stationsName[nextStation - 1] << "." << endl;
            cout << prefix << ">> 感谢您的支持, 欢迎再次乘坐本次列车." << endl;
        }
        cout << prefix << "-> 检测到当前乘客数量为: " << passengersCount << endl;
        cout << borderline << endl << endl;
    }

    cout << endl;
    cout << "[程序结束] 最终抵达人数: " << passengersCount << endl;
    cout << endl << endl;

    system("pause");
    return 0;
}