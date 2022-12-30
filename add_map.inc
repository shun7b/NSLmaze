declare add_map{
    input  moto_org_near[BIT], moto_org_near1[BIT], moto_org_near2[BIT],moto_org_near3[BIT],moto_org[BIT],sg_up[2],sg_down[2],sg_left[2],sg_right[2],wall_t_in,moto[BIT],up[BIT],right[BIT],down[BIT],left[BIT],start[BIT],goal[BIT],now[BIT];
    output data_out[BIT],data_out_index[BIT],data_near[BIT],wall_t_out,data_org[BIT],data_org_near[BIT],s_g[2],s_g_near[2];
    func_in add_exe(moto_org_near,moto_org_near1,moto_org_near2,moto_org_near3,moto_org,sg_up,sg_down,sg_right,sg_left,wall_t_in,moto,up,right,down,left,start,goal,now);
}
