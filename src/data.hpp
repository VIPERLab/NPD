#ifndef _DATA_HPP
#define _DATA_HPP
#include "common.hpp"
#include <vector>
#include <opencv2/core/core.hpp>

class DataSet {
  public:
    DataSet();
    static void LoadDataSet(DataSet& pos, DataSet& neg, int stages);
    void LoadPositiveDataSet(const std::string& positive, int stages);
    void LoadNegativeDataSet(const std::string& negative,const int pos_num,int stages);
    cv::Mat NextImage(int );
    void MoreNeg(int );
    void Remove(vector<int>);
    void ImgClear();
    void initWeights();
    cv::Mat Extract();
    void CalcWeight(int y, int maxWeight);
    void Clear();
  public:
    cv::Mat ppNpdTable;
    std::vector<cv::Mat> imgs;
    int size;

    float *W;
    float *Fx;
    

    //neg only
    std::vector<std::string> list;
    std::vector<cv::Mat> NegImgs;
    int current_id;
    int x,y;


};
#endif
