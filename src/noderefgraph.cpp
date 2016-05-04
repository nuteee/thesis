typedef adjacency_list<listS, vecS, directedS,
        property<vertex_name_t, osmium::unsigned_object_id_type>,
        property<edge_weight_t, int>> NodeRefGraph;