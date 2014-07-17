<?php

namespace RonanGuilloux\OAuthBundle\Controller;

use Symfony\Bundle\FrameworkBundle\Controller\Controller;

class DefaultController extends Controller
{
    public function indexAction($name)
    {
        return $this->render('RonanGuillouxOAuthBundle:Default:index.html.twig', array('name' => $name));
    }
}
