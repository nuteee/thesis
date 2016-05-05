try {
    /* ........ */

    std::shared_ptr<SmartCar> cop = m_smart_cars_map[cl.get_id()];

    if ( cop->set_route ( carLexer.get_route() ) )
        length += std::sprintf ( data+length, "<OK %d>", carLexer.get_id() );
    else
        length += std::sprintf ( data+length, "<ERR bad routing vector>" );
    
    /* ........ */
    boost::asio::write ( client_socket, boost::asio::buffer ( data, length ) );
    
}
catch ( std::exception& e ) {
    std::cerr << "Error: " << e.what() << std::endl;
} 