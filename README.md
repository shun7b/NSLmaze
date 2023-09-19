# NSLmaze
16*16マスの迷路探索の回路（FPGA並列アルゴリズム）
https://ieeexplore.ieee.org/document/9501483<br>
実行<br>
make <br>
verilogと実行バイナリファイル削除<br>
make clean<br>
nslcoreとiverilog必須<br>
add_map.nslが1コアになって９８コア(並列)で動く(add_all.nsl)<br>
詳しい設計はPDFとc言語（並列化していない。アルゴリズム検証用）で確認できる。
並列数が多いほど（迷路が大きいほど）早く動く可能性ある<br>各コアの計算がボトルネックになる為クロック周波数が下がる可能性との問題で速いか決まる。https://cir.nii.ac.jp/crid/1390015443655056384
