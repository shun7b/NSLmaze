declare kouka{
    input data_in17[BIT],data_in18[BIT],data_in19[BIT],data_in20[BIT],data_in21[BIT],data_in22[BIT],data_in23[BIT],data_in24[BIT],data_in25[BIT],data_in26[BIT],data_in27[BIT],data_in28[BIT],data_in29[BIT],data_in30[BIT],
            data_in33[BIT],data_in34[BIT],data_in35[BIT],data_in36[BIT],data_in37[BIT],data_in38[BIT],data_in39[BIT],data_in40[BIT],data_in41[BIT],data_in42[BIT],data_in43[BIT],data_in44[BIT],data_in45[BIT],data_in46[BIT],
            data_in49[BIT],data_in50[BIT],data_in51[BIT],data_in52[BIT],data_in53[BIT],data_in54[BIT],data_in55[BIT],data_in56[BIT],data_in57[BIT],data_in58[BIT],data_in59[BIT],data_in60[BIT],data_in61[BIT],data_in62[BIT],
            data_in65[BIT],data_in66[BIT],data_in67[BIT],data_in68[BIT],data_in69[BIT],data_in70[BIT],data_in71[BIT],data_in72[BIT],data_in73[BIT],data_in74[BIT],data_in75[BIT],data_in76[BIT],data_in77[BIT],data_in78[BIT],
            data_in81[BIT],data_in82[BIT],data_in83[BIT],data_in84[BIT],data_in85[BIT],data_in86[BIT],data_in87[BIT],data_in88[BIT],data_in89[BIT],data_in90[BIT],data_in91[BIT],data_in92[BIT],data_in93[BIT],data_in94[BIT],
            data_in97[BIT],data_in98[BIT],data_in99[BIT],data_in100[BIT],data_in101[BIT],data_in102[BIT],data_in103[BIT],data_in104[BIT],data_in105[BIT],data_in106[BIT],data_in107[BIT],data_in108[BIT],data_in109[BIT],data_in110[BIT],
            data_in113[BIT],data_in114[BIT],data_in115[BIT],data_in116[BIT],data_in117[BIT],data_in118[BIT],data_in119[BIT],data_in120[BIT],data_in121[BIT],data_in122[BIT],data_in123[BIT],data_in124[BIT],data_in125[BIT],data_in126[BIT],
            data_in129[BIT],data_in130[BIT],data_in131[BIT],data_in132[BIT],data_in133[BIT],data_in134[BIT],data_in135[BIT],data_in136[BIT],data_in137[BIT],data_in138[BIT],data_in139[BIT],data_in140[BIT],data_in141[BIT],data_in142[BIT],
            data_in145[BIT],data_in146[BIT],data_in147[BIT],data_in148[BIT],data_in149[BIT],data_in150[BIT],data_in151[BIT],data_in152[BIT],data_in153[BIT],data_in154[BIT],data_in155[BIT],data_in156[BIT],data_in157[BIT],data_in158[BIT],
            data_in161[BIT],data_in162[BIT],data_in163[BIT],data_in164[BIT],data_in165[BIT],data_in166[BIT],data_in167[BIT],data_in168[BIT],data_in169[BIT],data_in170[BIT],data_in171[BIT],data_in172[BIT],data_in173[BIT],data_in174[BIT],
            data_in177[BIT],data_in178[BIT],data_in179[BIT],data_in180[BIT],data_in181[BIT],data_in182[BIT],data_in183[BIT],data_in184[BIT],data_in185[BIT],data_in186[BIT],data_in187[BIT],data_in188[BIT],data_in189[BIT],data_in190[BIT],
            data_in193[BIT],data_in194[BIT],data_in195[BIT],data_in196[BIT],data_in197[BIT],data_in198[BIT],data_in199[BIT],data_in200[BIT],data_in201[BIT],data_in202[BIT],data_in203[BIT],data_in204[BIT],data_in205[BIT],data_in206[BIT],
            data_in209[BIT],data_in210[BIT],data_in211[BIT],data_in212[BIT],data_in213[BIT],data_in214[BIT],data_in215[BIT],data_in216[BIT],data_in217[BIT],data_in218[BIT],data_in219[BIT],data_in220[BIT],data_in221[BIT],data_in222[BIT],
            data_in225[BIT],data_in226[BIT],data_in227[BIT],data_in228[BIT],data_in229[BIT],data_in230[BIT],data_in231[BIT],data_in232[BIT],data_in233[BIT],data_in234[BIT],data_in235[BIT],data_in236[BIT],data_in237[BIT],data_in238[BIT],start[BIT],goal[BIT];
    output loot_out0[BIT],loot_out1[BIT],loot_out2[BIT],loot_out3[BIT],loot_out4[BIT],loot_out5[BIT],loot_out6[BIT],loot_out7[BIT],loot_out8[BIT],loot_out9[BIT],
            loot_out10[BIT],loot_out11[BIT],loot_out12[BIT],loot_out13[BIT],loot_out14[BIT],loot_out15[BIT],loot_out16[BIT],loot_out17[BIT],loot_out18[BIT],loot_out19[BIT],
            loot_out20[BIT],loot_out21[BIT],loot_out22[BIT],loot_out23[BIT],loot_out24[BIT],loot_out25[BIT],loot_out26[BIT],loot_out27[BIT],loot_out28[BIT],loot_out29[BIT],
            loot_out30[BIT],loot_out31[BIT],loot_out32[BIT],loot_out33[BIT],loot_out34[BIT],loot_out35[BIT],loot_out36[BIT],loot_out37[BIT],loot_out38[BIT],loot_out39[BIT],
            loot_out40[BIT],loot_out41[BIT],loot_out42[BIT],loot_out43[BIT],loot_out44[BIT],loot_out45[BIT],loot_out46[BIT],loot_out47[BIT],loot_out48[BIT],loot_out49[BIT],
            loot_out50[BIT],loot_out51[BIT],loot_out52[BIT],loot_out53[BIT],loot_out54[BIT],loot_out55[BIT],loot_out56[BIT],loot_out57[BIT],loot_out58[BIT],loot_out59[BIT],
            loot_out60[BIT],loot_out61[BIT],loot_out62[BIT],loot_out63[BIT],loot_out64[BIT],loot_out65[BIT],loot_out66[BIT],loot_out67[BIT],loot_out68[BIT],loot_out69[BIT],
            loot_out70[BIT],loot_out71[BIT],loot_out72[BIT],loot_out73[BIT],loot_out74[BIT],loot_out75[BIT],loot_out76[BIT],loot_out77[BIT],loot_out78[BIT],loot_out79[BIT],
            loot_out80[BIT],loot_out81[BIT],loot_out82[BIT],loot_out83[BIT],loot_out84[BIT],loot_out85[BIT],loot_out86[BIT],loot_out87[BIT],loot_out88[BIT],loot_out89[BIT],
            loot_out90[BIT],loot_out91[BIT],loot_out92[BIT],loot_out93[BIT],loot_out94[BIT],loot_out95[BIT],loot_out96[BIT],loot_out97[BIT],loot_out98[BIT],loot_out99[BIT],
            loot_out100[BIT],loot_out101[BIT],loot_out102[BIT],loot_out103[BIT],loot_out104[BIT],loot_out105[BIT],loot_out106[BIT],loot_out107[BIT],loot_out108[BIT],loot_out109[BIT],
            loot_out110[BIT]
            ;

    func_in in_do(data_in17,data_in18,data_in19,data_in20,data_in21,data_in22,data_in23,data_in24,data_in25,data_in26,data_in27,data_in28,data_in29,data_in30,
                data_in33,data_in34,data_in35,data_in36,data_in37,data_in38,data_in39,data_in40,data_in41,data_in42,data_in43,data_in44,data_in45,data_in46,
                data_in49,data_in50,data_in51,data_in52,data_in53,data_in54,data_in55,data_in56,data_in57,data_in58,data_in59,data_in60,data_in61,data_in62,
                data_in65,data_in66,data_in67,data_in68,data_in69,data_in70,data_in71,data_in72,data_in73,data_in74,data_in75,data_in76,data_in77,data_in78,
                data_in81,data_in82,data_in83,data_in84,data_in85,data_in86,data_in87,data_in88,data_in89,data_in90,data_in91,data_in92,data_in93,data_in94,
                data_in97,data_in98,data_in99,data_in100,data_in101,data_in102,data_in103,data_in104,data_in105,data_in106,data_in107,data_in108,data_in109,data_in110,
                data_in113,data_in114,data_in115,data_in116,data_in117,data_in118,data_in119,data_in120,data_in121,data_in122,data_in123,data_in124,data_in125,data_in126,
                data_in129,data_in130,data_in131,data_in132,data_in133,data_in134,data_in135,data_in136,data_in137,data_in138,data_in139,data_in140,data_in141,data_in142,
                data_in145,data_in146,data_in147,data_in148,data_in149,data_in150,data_in151,data_in152,data_in153,data_in154,data_in155,data_in156,data_in157,data_in158,
                data_in161,data_in162,data_in163,data_in164,data_in165,data_in166,data_in167,data_in168,data_in169,data_in170,data_in171,data_in172,data_in173,data_in174,
                data_in177,data_in178,data_in179,data_in180,data_in181,data_in182,data_in183,data_in184,data_in185,data_in186,data_in187,data_in188,data_in189,data_in190,
                data_in193,data_in194,data_in195,data_in196,data_in197,data_in198,data_in199,data_in200,data_in201,data_in202,data_in203,data_in204,data_in205,data_in206,
                data_in209,data_in210,data_in211,data_in212,data_in213,data_in214,data_in215,data_in216,data_in217,data_in218,data_in219,data_in220,data_in221,data_in222,
                data_in225,data_in226,data_in227,data_in228,data_in229,data_in230,data_in231,data_in232,data_in233,data_in234,data_in235,data_in236,data_in237,data_in238,start,goal);
  func_out out_do(loot_out0,loot_out1,loot_out2,loot_out3,loot_out4,loot_out5,loot_out6,loot_out7,loot_out8,loot_out9,
            loot_out10,loot_out11,loot_out12,loot_out13,loot_out14,loot_out15,loot_out16,loot_out17,loot_out18,loot_out19,
            loot_out20,loot_out21,loot_out22,loot_out23,loot_out24,loot_out25,loot_out26,loot_out27,loot_out28,loot_out29,
            loot_out30,loot_out31,loot_out32,loot_out33,loot_out34,loot_out35,loot_out36,loot_out37,loot_out38,loot_out39,
            loot_out40,loot_out41,loot_out42,loot_out43,loot_out44,loot_out45,loot_out46,loot_out47,loot_out48,loot_out49,
            loot_out50,loot_out51,loot_out52,loot_out53,loot_out54,loot_out55,loot_out56,loot_out57,loot_out58,loot_out59,
            loot_out60,loot_out61,loot_out62,loot_out63,loot_out64,loot_out65,loot_out66,loot_out67,loot_out68,loot_out69,
            loot_out70,loot_out71,loot_out72,loot_out73,loot_out74,loot_out75,loot_out76,loot_out77,loot_out78,loot_out79,
            loot_out80,loot_out81,loot_out82,loot_out83,loot_out84,loot_out85,loot_out86,loot_out87,loot_out88,loot_out89,
            loot_out90,loot_out91,loot_out92,loot_out93,loot_out94,loot_out95,loot_out96,loot_out97,loot_out98,loot_out99,
            loot_out100,loot_out101,loot_out102,loot_out103,loot_out104,loot_out105,loot_out106,loot_out107,loot_out108,loot_out109,
            loot_out110
            );           
}
