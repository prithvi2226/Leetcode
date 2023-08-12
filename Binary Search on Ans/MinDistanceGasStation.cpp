double gasStations(vector<int>& stations, double mid) {
    double num = 0;

    for (int i = 1; i < stations.size(); i++) {
        double distance = stations[i] - stations[i - 1];
        num += ceil(distance / mid) - 1;
    }

    return num;
}